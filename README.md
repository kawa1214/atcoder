# 入出力値の一括ダウンロードとテンプレートからコードを生成
## abs はコンテスト ID
## --workspace でダウンロードするパスを指定
## --lang で自動生成するコードの言語を指定
## --without-login でログインせずにダウンロード
$ atcoder-tools gen abs --workspace=path/to/atcoder-workspace/ --lang=cpp --without-login

# 複数の入力値に対してまとめてテストを実行
$ cd path/to/program-location
$ atcoder-tools test

# プログラムの提出
atcoder-tools submit

atcoder-tools gen abc222 --without-login --workspace=contests --lang=cpp

g++ main.cpp
atcoder-tools test