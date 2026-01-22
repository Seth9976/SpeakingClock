// 函数: sub_4640f0
// 地址: 0x4640f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = *(arg2 + 0xc)
int32_t result
void* edx

if (esi == 0)
    int32_t eax_3 = sub_462098(arg2)
    int32_t eax_5
    eax_5, edx = sub_461bf8(arg2)
    result = eax_3 + eax_5
else
    int32_t result_1
    result_1, edx = sub_462098(esi)
    result = result_1

int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
sub_464060(*(*(arg1 + 0x64) + 8), edx)
return result
