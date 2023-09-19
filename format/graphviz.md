# Graphviz

Для рисования конечных автоматов можно использовать утилиту [graphviz](https://graphviz.org/docs/layouts/).

Например, при таком содержимом `aut.dot`:

```dot
digraph {
    rankdir=LR;
    "^" [shape=none, label=""];
    node [shape=doublecircle];
    0;
    1;
    node [shape=circle];
    "^" -> 0;
    0 [label="1"];
    1 [label="3"];
    2 [label="2"];
    0 -> 2 [label="b"];
    0 -> 1 [label="ε"];
    1 -> 1 [label="a"];
    2 -> 1 [label="b"];
    2 -> 1 [label="a"];
}
```

следующая команда:

```sh
cat aut.dot | dot -Tpng -o aut.png
```

cоздаст такой файл `aut.png`:

![aut](./aut.png)
