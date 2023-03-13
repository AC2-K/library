---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/sparse_table.hpp
    title: sparse table
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"test/yosupo judge/data structure/Static RMQ.test.cpp\"\n\
    #define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n#line 2 \"template.hpp\"\
    \n#include<bits/stdc++.h>\nusing namespace std;\n#define rep(i, N)  for(int i=0;i<(N);i++)\n\
    #define all(x) (x).begin(),(x).end()\n#define popcount(x) __builtin_popcount(x)\n\
    using i128=__int128_t;\nusing ll = long long;\nusing ld = long double;\nusing\
    \ graph = vector<vector<int>>;\nusing P = pair<int, int>;\nconstexpr int inf =\
    \ 1e9;\nconstexpr ll infl = 1e18;\nconstexpr ld eps = 1e-6;\nconst long double\
    \ pi = acos(-1);\nconstexpr uint64_t MOD = 1e9 + 7;\nconstexpr uint64_t MOD2 =\
    \ 998244353;\nconstexpr int dx[] = { 1,0,-1,0 };\nconstexpr int dy[] = { 0,1,0,-1\
    \ };\ntemplate<class T>inline void chmax(T&x,T y){if(x<y)x=y;}\ntemplate<class\
    \ T>inline void chmin(T&x,T y){if(x>y)x=y;}\n#line 1 \"data-structure/sparse_table.hpp\"\
    \ntemplate<class T>\nclass sparse_table {\n    vector<vector<T>> table;\n    vector<int>\
    \ look_up;\npublic:\n    sparse_table(const vector<T>& vec = {}) {\n        int\
    \ sz = vec.size();\n        int log = 0;\n        while ((1 << log) <= sz) {\n\
    \            log++;\n        }\n        table.assign(log, vector<T>(1 << log));\n\
    \        for (int i = 0; i < sz; i++) {\n            table[0][i] = vec[i];\n \
    \       }\n        for (int i = 1; i < log; i++) {\n            for (int j = 0;\
    \ j + (1 << i) <= (1 << log); j++) {\n                table[i][j] = min(table[i\
    \ - 1][j], table[i - 1][j + (1 << (i - 1))]);\n            }\n        }\n    \
    \    look_up.resize(sz + 1);\n        for (int i = 2; i < look_up.size(); i++)\
    \ {\n            look_up[i] = look_up[i >> 1] + 1;\n        }\n    }\n\n    T\
    \ prod(int l, int r) {\n        int b = look_up[r - l];\n        return min(table[b][l],\
    \ table[b][r - (1 << b)]);\n    }\n};\n///@brief sparse table\n#line 4 \"test/yosupo\
    \ judge/data structure/Static RMQ.test.cpp\"\nint main() {\n\tint n, q;\n\tcin\
    \ >> n >> q;\n\tvector<int> a(n);\n\tfor (auto& aa : a) {\n\t\tcin >> aa;\n\t\
    }\n\n\tsparse_table<int> rmq(a);\n\twhile (q--) {\n\t\tint l, r;\n\t\tcin >> l\
    \ >> r;\n\t\tcout << rmq.prod(l, r) << '\\n';\n\t}\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n#include\"\
    template.hpp\"\n#include\"data-structure/sparse_table.hpp\"\nint main() {\n\t\
    int n, q;\n\tcin >> n >> q;\n\tvector<int> a(n);\n\tfor (auto& aa : a) {\n\t\t\
    cin >> aa;\n\t}\n\n\tsparse_table<int> rmq(a);\n\twhile (q--) {\n\t\tint l, r;\n\
    \t\tcin >> l >> r;\n\t\tcout << rmq.prod(l, r) << '\\n';\n\t}\n}"
  dependsOn:
  - template.hpp
  - data-structure/sparse_table.hpp
  isVerificationFile: true
  path: test/yosupo judge/data structure/Static RMQ.test.cpp
  requiredBy: []
  timestamp: '2023-03-10 13:31:13+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo judge/data structure/Static RMQ.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo judge/data structure/Static RMQ.test.cpp
- /verify/test/yosupo judge/data structure/Static RMQ.test.cpp.html
title: test/yosupo judge/data structure/Static RMQ.test.cpp
---