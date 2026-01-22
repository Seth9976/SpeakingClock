// 函数: sub_45b918
// 地址: 0x45b918
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_457ee4(arg1) != 0)
    *arg2 |= 0x2000

if (sub_457f14(arg1) != 0)
    *arg2 |= 0x4000

int32_t esi
esi.w = 0xffc7
char result = sub_403e64(arg1, esi)

if (result != 0)
    esi.w = 0xffca
    result = sub_403e64(arg1, esi)
    
    if (result != 0)
        esi.w = 0xffca
        result = sub_403e64(arg1, esi)
        
        if (result == 1)
            *arg2 = *arg2
    else
        *arg2 |= 0x1000

return result
