## 练习题目
https://github.com/codingkata/kata-puzzle/blob/master/00.FizzBuzz.md

## 说明

* 限时5分钟完成
* 可以选用擅长的语言完成，例如 C、C++、Java、C#、Javascript、Python、Scala 等
* 代码完成后必须附上 Readme 纯文本文档(推荐使用 markdown 排版)
* 必须有自动化测试代码进行验证
* Readme 文档中应描述如何运行单元测试或主程序来证明题目的正确性(至少针对测试用例输入能够得到对应输出)

## 题目内容

有一名体育老师，在某次离下课还有五分钟时，决定玩一个报数游戏。此时有100名学生在上课，游戏的规则如下：

1. 老师先说出两个不同的特殊数(都是个位数)，比如3, 5；让所有学生拍成一队，然后按顺序报数；
2. 学生报数时，如果所报数字是「第一个特殊数(3)」的倍数，或者包含「第一个特殊数(3)」，那么不能说该数字，而要说Fizz；
3. 学生报数时，如果所报数字是「第二个特殊数(5)」的倍数，或者包含「第一个特殊数(3)」，那么不能说该数字，而要说Buzz；
4. 如果所报数字同时是「两个特殊数」的倍数，也要特殊处理。例如，如果是「第一个(3)」和「第二个(5)」特殊数的倍数，那么也不能说该数字，而是要说FizzBuzz。
5. 学生报数时，如果所报数字包含了「特殊数」，那么也不能说该数字，而是要说对应的英文单词（见规则1和规则2）。例如，要报13的同学应该说Fizz；要报52的同学应该说Buzz。
6. 如果在一次报数中，匹配上述多个规则，Fizz和Buzz都只能出现一次。
7. 否则，直接说出要报的数字。



## 要求

使用程序模拟执行上述要求，打印出 从1~100所报的内容。每行打印一个报数内容。


--------------------------------------------------------------------------
## 实现代码运行说明 by meihang
1、执行原始程序
直接make


2、执行单元测试代码
