// 函数: sub_405108
// 地址: 0x405108
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == 0)
    return 

int64_t* ebx_1 = arg1
void* edx = *arg2
void* var_14_1 = edx

if (edx != 0)
    edx = *(edx - 4)

void* const edi_2 = arg3 - 1

if (arg3 s< 1)
    edi_2 = nullptr

if (edi_2 s> edx)
    edi_2 = edx

void* ebp_1 = *(ebx_1 - 4)
sub_4052a8(arg2, edx + ebp_1)

if (var_14_1 == ebx_1)
    ebx_1 = *arg2

void* eax_2 = *arg2
void* edx_2 = edi_2 + ebp_1
sub_4030d0(eax_2 + edi_2, edx_2 + eax_2, *(eax_2 - 4) - edx_2)
sub_4030d0(ebx_1, *arg2 + edi_2, ebp_1)
