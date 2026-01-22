// 函数: sub_477e30
// 地址: 0x477e30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (ebx == 0)
    ebx = data_4aba24

int32_t* esi = *(*(arg2 - 4) + 0x84)
int32_t result

if (esi != 0)
    result = sub_403b40(esi)

if (esi == 0 || ebx != result)
    sub_403c68(*(*(arg2 - 4) + 0x84))
    *(arg2 - 4)
    int32_t edx_1
    edx_1.b = 1
    result = (*(ebx + 0x2c))()
    *(*(arg2 - 4) + 0x84) = result

return result
