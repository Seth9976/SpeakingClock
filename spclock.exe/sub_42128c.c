// 函数: sub_42128c
// 地址: 0x42128c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_416d70(*(arg1 - 4), *(arg1 - 8))
void* result

if (*(arg1 - 9) == 0)
    bool cond:0_1 = edx_1 == 0
    
    if (edx_1 == 0)
        cond:0_1 = eax_3 == 0
    
    result.b = cond:0_1
else
    int32_t edx_3
    result, edx_3 = sub_416d70(*(arg1 - 0x10), *(arg1 - 8))
    bool cond:1_1 = edx_3 == edx_1
    
    if (edx_3 == edx_1)
        cond:1_1 = result == eax_3
    
    result.b = cond:1_1

return result
