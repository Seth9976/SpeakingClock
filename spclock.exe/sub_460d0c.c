// 函数: sub_460d0c
// 地址: 0x460d0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg1
void* ecx = *(arg1 + 0x30)

while (*(esi + 0x94) == 0)
    if (ecx == 0)
        break
    
    esi = ecx
    ecx = *(ecx + 0x30)

if (esi != 0)
    sub_45736c(arg1, 0xb046, esi, arg2 & 0x7f)
