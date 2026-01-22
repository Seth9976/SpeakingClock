// 函数: sub_4589f4
// 地址: 0x4589f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result_5 = *(arg1[0x1d] + 0x14)
int32_t result_1

result_1 = result_5 u<= 0 ? 0 : result_5

int32_t result_6 = *(arg1[0x1d] + 0x10)
int32_t result_2

result_2 = result_6 u<= 0 ? 0 : result_6

int32_t result_7 = *(arg1[0x1d] + 0xc)
int32_t result_3

result_3 = result_7 u<= 0 ? 0 : result_7

int32_t result_8 = *(arg1[0x1d] + 8)
int32_t result_4

result_4 = result_8 u<= 0 ? 0 : result_8

int32_t result = (*(*arg1 + 0x38))(&result_4, &result_3)

if (result_3 s> 0)
    result = *arg2

if (result_3 s> 0 && result s> result_3)
    result = result_3
    *arg2 = result
else if (result_1 s> 0)
    result = *arg2
    
    if (result s< result_1)
        result = result_1
        *arg2 = result

if (result_4 s> 0)
    result = *arg3

if (result_4 s> 0 && result s> result_4)
    result = result_4
    *arg3 = result
else if (result_2 s> 0)
    result = *arg3
    
    if (result s< result_2)
        result = result_2
        *arg3 = result

return result
