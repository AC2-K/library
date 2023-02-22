---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/lca.hpp
    title: LCA
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/Library-Checker/Lowest Common Ancestor.test.cpp
    title: test/Library-Checker/Lowest Common Ancestor.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/Library-Checker/Static RMQ.test.cpp
    title: test/Library-Checker/Static RMQ.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: SparseTable
    links: []
  bundledCode: "#line 1 \"data-structure/sparse_table.hpp\"\ntemplate<class T>\nclass\
    \ sparse_table {\n    vector<vector<T>> table;\n    vector<int> look_up;\npublic:\n\
    \    sparse_table(const vector<T>& vec = {}) {\n        int sz = vec.size();\n\
    \        int log = 0;\n        while ((1 << log) <= sz) {\n            log++;\n\
    \        }\n        table.assign(log, vector<T>(1 << log));\n        for (int\
    \ i = 0; i < sz; i++) {\n            table[0][i] = vec[i];\n        }\n      \
    \  for (int i = 1; i < log; i++) {\n            for (int j = 0; j + (1 << i) <=\
    \ (1 << log); j++) {\n                table[i][j] = min(table[i - 1][j], table[i\
    \ - 1][j + (1 << (i - 1))]);\n            }\n        }\n        look_up.resize(sz\
    \ + 1);\n        for (int i = 2; i < look_up.size(); i++) {\n            look_up[i]\
    \ = look_up[i >> 1] + 1;\n        }\n    }\n\n    T prod(int l, int r) {\n   \
    \     int b = look_up[r - l];\n        return min(table[b][l], table[b][r - (1\
    \ << b)]);\n    }\n};\n///@brief SparseTable\n"
  code: "template<class T>\nclass sparse_table {\n    vector<vector<T>> table;\n \
    \   vector<int> look_up;\npublic:\n    sparse_table(const vector<T>& vec = {})\
    \ {\n        int sz = vec.size();\n        int log = 0;\n        while ((1 <<\
    \ log) <= sz) {\n            log++;\n        }\n        table.assign(log, vector<T>(1\
    \ << log));\n        for (int i = 0; i < sz; i++) {\n            table[0][i] =\
    \ vec[i];\n        }\n        for (int i = 1; i < log; i++) {\n            for\
    \ (int j = 0; j + (1 << i) <= (1 << log); j++) {\n                table[i][j]\
    \ = min(table[i - 1][j], table[i - 1][j + (1 << (i - 1))]);\n            }\n \
    \       }\n        look_up.resize(sz + 1);\n        for (int i = 2; i < look_up.size();\
    \ i++) {\n            look_up[i] = look_up[i >> 1] + 1;\n        }\n    }\n\n\
    \    T prod(int l, int r) {\n        int b = look_up[r - l];\n        return min(table[b][l],\
    \ table[b][r - (1 << b)]);\n    }\n};\n///@brief SparseTable"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/sparse_table.hpp
  requiredBy:
  - graph/lca.hpp
  timestamp: '2023-02-21 08:23:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/Library-Checker/Lowest Common Ancestor.test.cpp
  - test/Library-Checker/Static RMQ.test.cpp
documentation_of: data-structure/sparse_table.hpp
layout: document
redirect_from:
- /library/data-structure/sparse_table.hpp
- /library/data-structure/sparse_table.hpp.html
title: SparseTable
---