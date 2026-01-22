// 函数: sub_40aa8e
// 地址: 0x40aa8e
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = 0
char ecx = *arg1

if (ecx == 0x2b || ecx == 0x2d)
    arg1 = &arg1[1]

int32_t result

do
    result.b = *arg1
    result.b -= 0x3a
    char temp0_1 = result.b
    result.b += 0xa
    
    if (temp0_1 u< 0xf6)
        break
    
    arg1 = &arg1[1]
    i = i * 0xa + result
while (i u< 0x1f4)

return result
