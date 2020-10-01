#include <stdio.h>

/* ボードの幅・高さ・数字の最大値 */
#define NUM 4

/* ブロックの幅・高さ */
#define BLOCK 3

/* BOOL型の定義 */
typedef enum
{
    TRUE = 1,
    FALSE = 0
} BOOL;

/* ボードの初期状態 */

#if NUM == 4
static int board[NUM][NUM] = {
    {1, 2, 0, 0},
    {0, 0, 0, 1},
    {3, 0, 4, 0},
    {0, 4, 0, 0}
};
#endif

/* 見つかった答えの個数 */
static unsigned int answer = 0;

/* 関数のプロタイプ宣言 */
void showBoard(void);
BOOL putNumber(int, int, int);
BOOL checkNumber(int, int, int);
void start(void);

/**
 * 答えとなるボードを表示する
 * 
 * 引数
 * なし
 * 
 * 返却値
 * なし
 */
void showBoard(void)
{
    int i, j;

    printf("%u個目の解答です\n", answer);

    for (j = 0; j < NUM; j++)
    {
        for (i = 0; i < NUM; i++)
        {
            printf("%d ", board[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

/**
 * 数字が入れられるかを判断する
 * 
 * 引数
 * i：入れる場所（横方向座標）
 * j：入れる場所（縦方向座標）
 * number：入れる数字
 * 
 * 返却値
 * TRUE：入れられる場合
 * FALSE：入れられない場合
 */
BOOL checkNumber(int i, int j, int number)
{
    int x, y;
    int bi, bj;

    /* 第j行に同じ数字があるかどうかを判断 */
    for (x = 0; x < NUM; x++)
    {
        if (board[j][x] == number)
        {
            /* あった場合は入れられない */
            return FALSE;
        }
    }

    /* 第i行に同じ数字があるかどうかを判断 */
    for (y = 0; y < NUM; y++)
    {
        if (board[y][i] == number)
        {
            /* あった場合は入れられない */
            return FALSE;
        }
    }

/* 同じブロック内に同じ数字があるかどうかを判断

    //同じブロックの先頭座標を計算
    bi = i / BLOCK * BLOCK;
    bj = j / BLOCK * BLOCK;

    for (y = 0; y < BLOCK; y++)
    {
        for (x = 0; x < BLOCK; x++)
        {
            if (board[bj + y][bi + x] == number)
            {
                //あった場合は入れられない 
                return FALSE;
            }
        }
    }

    //同じ行・同じ列・同じグループに同じ数字がない場合 
    return TRUE;
}
*/

/**
 * 数字をボードに入れる
 * 
 * 引数
 * i：入れる場所（横方向座標）
 * j：入れる場所（縦方向座標）
 * number：入れる数字
 * 
 * 返却値
 * TRUE：入れられた場合
 * FALSE：入れられなかった場合
 */
BOOL putNumber(int i, int j, int number)
{

    int fix_flag = FALSE;

    /* 最初から(i, j)座標にnumberが入っているかを確認 */
    if (board[j][i] != number)
    {
        /* 入っているのがnumber以外の場合 */

        /* number以外の数字が入っているかを確認 */
        if (board[j][i] != 0)
        {
            /* 異なる数字が入っている場合は入れられない */
            return FALSE;
        }

        /* (i, j)座標にnumberが入れたパターンが解になり得るかを確認 */
        if (!checkNumber(i, j, number))
        {
            /* 解になり得ない場合はこのパターンを調べても無駄 */
            return FALSE;
        }

        /* (i, j)座標にnumberを入れる */
        board[j][i] = number;
    }
    else
    {
        /* 最初から入ってた場合はフラグを立てておく */
        fix_flag = TRUE;
    }

    /* 全マスに数字を入れたかを確認 */
    if (i == NUM - 1 && j == NUM - 1)
    {

        /* 解の数をカウントアップ */
        answer++;

        /* 結果を表示 */
        showBoard();
    }
    else
    {
        /* まだ入れていないマスがある場合 */

        int n;
        int next_i, next_j;

        /* 次の行に移るかを確認 */
        if (i + 1 >= NUM)
        {
            /* 次に数字を入れる場所を次の行に設定 */
            next_i = 0;
            next_j = j + 1;
        }
        else
        {
            /* 今の行のまま次に数字を入れる場所を設定 */
            next_i = i + 1;
            next_j = j;
        }

        /* 次のマスに数字を入れてみる */
        for (n = 1; n <= NUM; n++)
        {
            putNumber(next_i, next_j, n);
        }
    }

    /* numberが最初から入れられていたかを確認 */
    if (!fix_flag)
    {
        /* 入れた数字を取り除く */
        board[j][i] = 0;
    }

    return TRUE;
}

/**
 * 数独を開始する
 * 
 * 引数
 * なし
 * 
 * 返却値
 * なし
 */
void start(void)
{

    int n;

    for (n = 1; n <= NUM; n++)
    {
        /* (0, 0)座標に数字nを入れてゲーム開始 */
        putNumber(0, 0, n);
    }
}

int main(void)
{

    start();

    printf("回答数：%u\n", answer);
    return 0;
}