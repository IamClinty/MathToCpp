# MathToCpp

## 线性代数篇

### 方阵 SquareMatrix

#### 初始化函数
+ ```SquareMatrix()```
+ ```SquareMatrix(T** arr)```
+ ```SquareMatrix(T (&arr)[][n])```
+ ```SquareMatrix(const std::vector<std::vector<T>>& vec)```
#### 析构函数
+ ```~SquareMatrix()```

#### 功能函数

##### 输出```operator<<```

+ 描述

+ 参数

	| 参数名 | 类型 | 描述 | 默认值 |
	|:----|:------|:------|:------|
	| os | std::ostream | 暂无 | 无 |
	| squareMatrix | SquareMatrix<T, n> | 暂无 | 无 |
+ 返回值
	| 类型 | 描述 |
	|:----|:------|
	| std::ostream| 暂无 |
##### 方阵加法```operator+```

+ 描述

+ 参数

	| 参数名 | 类型 | 描述 | 默认值 |
	|:----|:------|:------|:------|
	| other | SquareMatrix<T, n> | 暂无 | 无 |
+ 返回值
	| 类型 | 描述 |
	|:----|:------|
	| SquareMatrix<T, n> | 暂无 |
##### 方阵乘法```operator*```

+ 描述

+ 参数

	| 参数名 | 类型 | 描述 | 默认值 |
	|:----|:------|:------|:------|
	| lSquare | SquareMatrix<T, n> | 暂无 | 无 |
	| rSquare | SquareMatrix<T, n> | 暂无 | 无 |
+ 返回值
	| 类型 | 描述 |
	|:----|:------|
	| SquareMatrix<T, n> | 暂无 |
##### 方阵转置```transpose```

+ 描述

+ 返回值
	| 类型 | 描述 |
	|:----|:------|
	| SquareMatrix<T, n> | 暂无 |
##### 获取方阵行数```getRows```

+ 描述

+ 返回值
	| 类型 | 描述 |
	|:----|:------|
	| int | 暂无 |
##### 获取方阵列数```getCols```

+ 描述

+ 返回值
	| 类型 | 描述 |
	|:----|:------|
	| int | 暂无 |

