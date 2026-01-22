// 函数: sub_409c7c
// 地址: 0x409c7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg1
int32_t i = 0xffffffff

while (i != 0)
    bool cond:0_1 = 0 != *edi
    edi += 1
    i -= 1
    
    if (not(cond:0_1))
        break

return edi - 1
