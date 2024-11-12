#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 == "vertebrado"){
        if(s2 == "ave"){
            if(s3 == "carnivoro"){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(s3 == "onivoro"){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(s2 == "inseto"){
            if(s3 == "hematofago"){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(s3 == "hematofago"){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
