#include <iostream>
#include <chrono>

//iterativo
unsigned long long facto_i(int n) {
    unsigned long long resultado = 1;
    for (int i=2; i<=n; i++) {
        resultado*= i;
    }
    return resultado;
}

//recursivo
unsigned long long facto_r(int n) {
    if (n<=1) return 1;
    return n*facto_r(n-1);
}



int main() {
    int valores_n[] = {5, 10, 15, 20};
    int num_valores = sizeof(valores_n) / sizeof(valores_n[0]);

    for (int i=0; i<num_valores; i++) {
        int n=valores_n[i];

        auto inicio_i=std::chrono::high_resolution_clock::now();
        unsigned long long res_i=facto_i(n);
        auto fin_i=std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duracion_i=fin_i-inicio_i;

        auto inicio_r=std::chrono::high_resolution_clock::now();
        unsigned long long res_r=facto_r(n);
        auto fin_r=std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duracion_r=fin_r-inicio_r;


        std::cout<<"n = "<<n<<"!"<<"\n";
        std::cout<<"Iterativo - Resultado: " << res_i
                 <<" | Tiempo: "<< duracion_i.count()<<" seg\n";
        std::cout<<"Recursivo - Resultado: " << res_r
                 <<" | Tiempo: "<< duracion_r.count()<<" seg\n";
    }
    return 0;
}

