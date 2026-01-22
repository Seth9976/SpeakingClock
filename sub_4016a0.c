// 函数: sub_4016a0
// 地址: 0x4016a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_401634()
int32_t** eax = VirtualAlloc(nullptr, 0x13fff0, MEM_COMMIT, PAGE_READWRITE)

if (eax == 0)
    data_4ad71c = 0
    return 0

int32_t*** edx = data_4ad708
*eax = &data_4ad704
data_4ad708 = eax
eax[1] = edx
*edx = eax
eax[0x4fffb] = 2
data_4ad71c = 0x13ffe0 - arg1
void* result = &eax[0x4fffc] - arg1
data_4ad718 = result
*(result - 4) = arg1 | 2
return result
