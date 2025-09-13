# 任务4 - 战场寻路

## 伪代码思路

```
function BFS(map, start, goal):
    queue = deque([start])
    visited = set([start])
    parent = {}  # 记录路径
    
    while queue not empty:
        current = queue.popleft()
        if current == goal:
            return reconstruct_path(parent, start, goal)
        
        for each neighbor in [上, 右, 下, 左] 四个方向:
            if neighbor 在边界内 and 未被访问 and map[neighbor] == 0:
                visited.add(neighbor)
                parent[neighbor] = current
                queue.append(neighbor)
    
    return "I can't go to the position (goal_x,goal_y)."

function reconstruct_path(parent, start, goal):
    path = []
    current = goal
    while current != start:
        path.append(current)
        current = parent[current]
    path.append(start)
    return reversed(path)
```

## 算法选择理由
- 选择BFS而不是DFS，因为BFS保证找到最短路径
- 使用队列实现先进先出，确保按层次遍历
- 使用visited集合避免重复访问
- 使用parent字典记录路径

## 输入输出说明
- **输入**：地图文件路径、起点坐标(x1,y1)、终点坐标(x2,y2)
- **输出**：带*标记的路径地图 或 错误信息

## 测试方式
```bash
# 如果实现代码，可以这样测试
./path_finder map.txt 0 0 4 4
```

## 预期结果
对于测试地图从(0,0)到(4,4)，应该能找到路径并用*标记
