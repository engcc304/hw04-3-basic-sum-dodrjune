
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>
int main() {
    int no1, no2, no3 ;
    printf( "chose 3 number : " ) ; 
    scanf( "%d %d %d", &no1 ,&no2, &no3 ) ;
    int Ans = no1 + no2 + no3 ;
    printf ("Ans = %d\n", Ans ) ;

    return 0;
}//end function