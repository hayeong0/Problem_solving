#include <iostream>
#include <cmath>
//(L ≤ U < 1,000,000)
using namespace std;

int main() {
    int L = 0, U = 0, x = 0, y = 0;
    int *isprame = (int *)malloc(sizeof(int)* U);

    while(1) {
        scanf("%d %d", &L, &U);

        if(L == -1 && U == -1) break;

        for(int i = L; i <= U; i++) {
           isprame[i] = i;
        }

        for(int i = 2; i <= U; i++) { 
            if (isprame[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다
                continue;
            for (int j = i + i; j <= U; j += i) { // i를 제외한 i의 배수들은 0으로 체크
                isprame[j] = 0;
            }
        }
     
        // for(int i = L; i <= sqrt(U); i++){
        //     if(!isprame[i]) continue;
        //     for(int j = i+i; j <= U; j+= i){
        //         isprame[j] = 0;   //소수 아님
        //         break;
        //     }
            
        // }
        
        // for(int i = 2; i <= U; i++) {
        //     if(isprame[i] != 0) {
        //         cout << i << '\n';
        //         x++;
        //     }
        //     if(i%4 == 1) {
        //         cout << "test: " << i << '\n';
        //         y++;
        //     }     
        // }
        // for(int i = L; i < U+1; i++){
        //     for(int j = 2; j <= sqrt(i); j++){
        //         if(i%j == 0) {  //소수X
        //             isprame = 0;
        //             break;
        //         }
        //     }
        //     if(isprame){
        //         x++; //소수
        //         if(i%4 == 1) y++;
        //     }
        //     isprame = 1; //초기화
        // }

        printf("%d %d\n", x, y);
        // x = 0, y = 0;
	}
    
    delete(isprame);
    return 0;     
}