#pragma once
template <class T, class U = T>
U mod_pow(T base, T exp, T mod){
    T ans = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            ans *= base;
            ans %= mod;
        }
        base *= base;
        base %= mod;
        exp >>= 1;
    }
    return ans;
}
///@brief mod pow(バイナリ法)