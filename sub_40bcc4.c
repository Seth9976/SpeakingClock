// 函数: sub_40bcc4
// 地址: 0x40bcc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_d = 0
*arg4 = 0
sub_40bca0(arg3, arg2)
int32_t i = *arg2
int32_t esi = 0

for (; i s<= sub_404e48(arg3); i += 1)
    if (*(arg3 + i - 1) - 0x30 u>= 0xa)
        break
    
    if (esi.w u>= 0x3e8)
        break
    
    int32_t eax_4
    eax_4.w = (esi * 0xa).w + zx.w(*(arg3 + i - 1)) - 0x30
    esi = eax_4

if (i s> *arg2)
    *arg4 = i.b - (*arg2).b
    *arg2 = i
    *arg1 = esi.w
    var_d = 1

return zx.d(var_d)
