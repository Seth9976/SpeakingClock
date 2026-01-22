// 函数: sub_4076c8
// 地址: 0x4076c8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*arg4 = arg1.b
void* edi = &arg4[1]
uint32_t result_2
char entry_ebx

if (entry_ebx != 0)
    result_2 = arg2
    
    if (result_2 s>= 0)
        goto label_4076de
    
    arg1.b = 0x2d
    result_2 = neg.d(result_2)
    *edi = arg1.b
    edi += 1
else
    result_2 = 0
label_4076de:
    arg1:1.b = arg1:1.b
    
    if (arg1:1.b != 0)
        arg1.b = arg1:1.b
        *edi = arg1.b
        edi += 1

uint32_t result_1 = result_2
uint32_t result = result_1
int32_t* i = &result

while (true)
    int32_t edx_1 = 0
    int32_t temp2_1 = data_413178
    *i = (modu.dp.d(edx_1:result_1, temp2_1)).b + 0x30
    i += 1
    arg3 -= 1
    result_1 = divu.dp.d(edx_1:result_1, temp2_1)
    
    if (result_1 == 0)
        if (arg3 s<= 0)
            break

do
    i -= 1
    result_1.b = *i
    *edi = result_1.b
    edi += 1
while (i != &result)

return result
