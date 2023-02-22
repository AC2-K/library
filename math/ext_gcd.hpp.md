---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/AOJ/NTL_1_E.test.cpp
    title: test/AOJ/NTL_1_E.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u6CD5"
    links: []
  bundledCode: "#line 1 \"math/ext_gcd.hpp\"\nll ext_gcd(ll a,ll b,ll&x,ll&y){\n \
    \   if(b==0){\n        x=1,y=0;\n        return a;\n    }else{\n        ll d=ext_gcd(b,a%b,y,x);\
    \    //\u9061\u308B\n        y-=a/b*x;\n        return d;\n    }\n}\n/// @brief\
    \ \u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u6CD5\n/// @return ax+by=gcd(a,b)\u306A\
    \u308Bx,y\u3092\u683C\u7D0D\u3059\u308B,\u8FD4\u308A\u5024\u306Bgcd(a,b)\n"
  code: "ll ext_gcd(ll a,ll b,ll&x,ll&y){\n    if(b==0){\n        x=1,y=0;\n     \
    \   return a;\n    }else{\n        ll d=ext_gcd(b,a%b,y,x);    //\u9061\u308B\n\
    \        y-=a/b*x;\n        return d;\n    }\n}\n/// @brief \u62E1\u5F35\u30E6\
    \u30FC\u30AF\u30EA\u30C3\u30C9\u6CD5\n/// @return ax+by=gcd(a,b)\u306A\u308Bx,y\u3092\
    \u683C\u7D0D\u3059\u308B,\u8FD4\u308A\u5024\u306Bgcd(a,b)"
  dependsOn: []
  isVerificationFile: false
  path: math/ext_gcd.hpp
  requiredBy: []
  timestamp: '2023-02-21 08:23:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/AOJ/NTL_1_E.test.cpp
documentation_of: math/ext_gcd.hpp
layout: document
redirect_from:
- /library/math/ext_gcd.hpp
- /library/math/ext_gcd.hpp.html
title: "\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u6CD5"
---