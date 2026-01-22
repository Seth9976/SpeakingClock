// 函数: sub_416530
// 地址: 0x416530
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg2[4]
int32_t edi = arg2[2]
char temp0 = *(arg2 + 0xb)

if (temp0 u<= 0xfe)
    if (temp0 u< 0xfe)
        return edi()
    
    return (*(sx.d(edi.w) + *arg1))()

char* edi_4 = (edi & 0xffffff) + arg1
void* result = **arg2
int32_t count
count.b = *(result + 1)
count.b = *(result + count + 2)
result.b = *arg3

if (result.b u>= count.b)
    result.b = count.b

*edi_4 = result.b
count.b = result.b
__builtin_memcpy(&edi_4[1], &arg3[1], count)
return result
