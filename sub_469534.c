// 函数: sub_469534
// 地址: 0x469534
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404fb0(arg1[2], arg1[0x19])
void* ebx_1
bool z

if (z)
    ebx_1 = arg1[1]

char eax_1

if (z && (ebx_1 == 0 || (*(ebx_1 + 0x1c) & 1) == 0))
    eax_1 = 1
else
    eax_1 = 0

void* result = sub_4238a4(arg1, arg2)

if (eax_1 != 0)
    result = arg1[0x14]
    
    if (*(result + 8) == 0)
        return sub_469110(arg1, arg2)

return result
