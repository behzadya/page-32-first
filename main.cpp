#include <iostream>

int main() {
    int i,mehdi[100];
    for ( i = 0 ; i<=99 ; i++ )
        std::cin>>mehdi[i];
    for ( i = 0 ; i<=99 ; i++ )
        if (mehdi[i]==i)
            std::cout<<mehdi[i]<<" ";
}
