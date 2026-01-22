// 函数: sub_43101c
// 地址: 0x43101c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1

if (*(ebx + 0x32) != 0 && *(ebx + 0x31) != 0)
    return 

void* esi_1 = ebx[0xa]
int32_t eax = *(esi_1 + 0xc)

if (eax != 0)
    sub_42f900(eax)
    DeleteObject(*(esi_1 + 0xc))
    *(esi_1 + 0xc) = 0

sub_430e88(ebx)
sub_430e98(ebx)
void* esi_2 = ebx[0xa]
COLORREF eax_5 = sub_430dc4(ebx)
*(esi_2 + 0xc) = sub_43040c(*(esi_2 + 8), *(esi_2 + 0x10), eax_5)
*(ebx + 0x32) = 1
*(ebx + 0x31) = 1
