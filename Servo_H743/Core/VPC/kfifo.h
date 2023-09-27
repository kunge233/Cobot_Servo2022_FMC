// 这是一个C++头文件，实现了一个固定大小的循环缓冲区（也称为环形缓冲区），名为"kfifo"。该模板类有两个参数：数据类型T和元素个数，而且元素个数必须是2的整数次幂。
//
// 该类有公共成员来表示缓冲区的输入和输出索引，以及一个数组来保存数据。它还有几个成员函数：
//
// is_not_empty()：如果缓冲区不为空（即有至少一个元素可读），则返回true。
// is_not_full()：如果缓冲区未满（即至少有一个位置可写入元素），则返回true。
// push()：将一个元素写入缓冲区，如果需要，会回绕到数组的开头（即使用位运算的与操作将索引掩码到数组的大小）。
// top()：读取并返回缓冲区中的下一个元素，如果需要，会回绕。
// reset()：通过将输入和输出索引设置为零来清除缓冲区。
//
// 这段代码的目的是为嵌入式系统或其他内存受限环境提供轻量级、高效的缓冲区来存储数据。

#ifndef KFIFO_H
#define KFIFO_H

#include <cstddef>

// 注意! size 必须为 2 的整数幂
template <class T, size_t size>
class kfifo {
public:
    size_t in = 0;
    size_t out = 0;
    T data[size];

public:
    inline bool is_not_empty()
    {
        return (in > out);
    }
    inline bool is_not_full()
    {
        return ((in - out) < size);
    }
    inline void push(T t)
    {
        data[in++ & (size - 1)] = t;
    }
    inline T top()
    {
        return data[out++ & (size - 1)];
    }
    inline void reset()
    {
        in = 0;
        out = 0;
    }
};

#endif // KFIFO_H
