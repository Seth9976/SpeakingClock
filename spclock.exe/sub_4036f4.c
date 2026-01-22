// 函数: sub_4036f4
// 地址: 0x4036f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
char* var_8 = arg1

if (arg3 u> 0xff)
    arg3 = 0xff

int32_t i

do
    ebx.b = *arg2
    arg2 = &arg2[1]
    
    if (ebx.b == 0)
        break
    
    arg1 = &arg1[1]
    *arg1 = ebx.b
    i = arg3
    arg3 -= 1
while (i != 1)
char result = arg1.b - var_8.b
*var_8 = result
return result
