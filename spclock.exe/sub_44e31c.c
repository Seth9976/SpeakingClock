// 函数: sub_44e31c
// 地址: 0x44e31c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t ebx = arg1
void* esi = *(ebx + 0x64)

if (esi == 0)
    return 

arg1 = sub_44e490(esi) - 1

if (arg1 s< 0)
    return 

int32_t i_1 = arg1 + 1
int32_t edi_1 = 0
int32_t i

do
    arg1 = sub_44e4a0(*(ebx + 0x64), edi_1)
    
    if (ebx != arg1 && *(arg1 + 0x3d) != 0 && *(arg1 + 0x3f) == *(ebx + 0x3f))
        sub_44e368(arg1, 0)
    
    edi_1 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
