/* main 함수 */

/* 
 * C 프로그램이 시작할 때 main 함수가 실행됩니다. 
 * C 프로그램이 시작될 때 실행된 main 함수가 종료되면 C 프로그램도 종료됩니다.
 */

/* To Do: 타입이 int고, 이름이 main이고, 0을 반환하는 함수를 정의해보세요 */
int number(int x); 
int main()
{
	return number(3);
}
int number(int x)
{
	return x + 10;
}