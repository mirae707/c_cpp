#include <stdio.h>

void calYearly(int monthly_invest_money, float yearly_profit);

int main(void){
    int monthly_invest_money = 0;
    double yearly_profit = 0;
    printf("10억을 벌려면 매월 얼마씩 몇년을 투자해야 모을 수 있을까요?\n");
    printf("매월 투자할 금액을 입력하세요(단위: 만원): ");
    scanf("%d", &monthly_invest_money);

    printf("자신있는 연 평균 투자 수익률을 입력하세요(단위 백분위): ");
    scanf("%lf", &yearly_profit);
    printf("\n");

    calYearly(monthly_invest_money, yearly_profit);

    return 0;
}

void calYearly(int monthly_invest_money, float yearly_profit){
    int i = 0, money = 0;
    double profit = 0;

    monthly_invest_money *= 10000;
    money = monthly_invest_money;
    profit = 1 + yearly_profit / 100 / 12;

    for(i = 1; money < 1000000000; i++){
        money *= profit;
        if (money / 10000 < 10000 && i % 12 == 0)
            printf("%d년 후 투자금액은 %d만원 입니다.\n", i/12, (money/10000));
        else if (money / 10000 > 10000 && i % 12 == 0)
            printf("%d년 후 투자금액은 %d억%d만원 입니다.\n", i/12, (money/100000000), (money%100000000/10000));
        money += monthly_invest_money;
    }
    printf("\n--------------------------------------------------\n");
    printf("10억을 모으는데 걸리는 시간은 %d년 입니다!\n", i/12);
    printf("--------------------------------------------------\n");
}
