// 函数: sub_422a60
// 地址: 0x422a60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* esi = arg1
int32_t i

for (i = arg3; i s> 0; i -= 1)
    char eax = *esi
    
    if (eax - 0x30 u>= 0x37)
        break
    
    if (esi[1] - 0x30 u>= 0x37)
        break
    
    *arg2 = (zx.d(*((zx.d(eax) << 1) + &data_4aab30)) << 4).b
        + (*((zx.d(esi[1]) << 1) + &data_4aab30)).b
    arg2 = &arg2[1]
    esi = &esi[2]

return arg3 - i
