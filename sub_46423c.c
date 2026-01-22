// 函数: sub_46423c
// 地址: 0x46423c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t esi = *(arg1 + 0x14)

if (esi != 0 && esi != *(*(arg2 - 4) + 0x64) && sub_461b54() == 1)
    *(arg1 + 0x14)
    sub_46423c(arg2)

*(arg1 + 0x14)
int32_t ebx

if (sub_461b54() == 1 || *(arg1 + 0x24) == 0)
    ebx.b = 1
else
    ebx = 0
    var_8 = *(*(arg2 - 4) + 0x18) + *(*(arg2 - 4) + 0xc) + 0xe
    
    if (sub_462180(arg1) == 0)
        if (sub_462174(arg1) != 0)
            if (sub_462098(sub_462174(arg1)) - *(arg1 + 0x24) s>= var_8)
                sub_4620c0(arg1, sub_461bb0(arg1) + *(arg1 + 0x24))
                sub_462114(sub_462174(arg1))
            else
                ebx.b = 1
    else
        void* eax_18 = sub_462180(arg1)
        
        if (sub_462098(eax_18) - sub_461bb0(eax_18) - *(arg1 + 0x24) s>= var_8)
            sub_4620c0(eax_18, sub_462098(eax_18) - *(arg1 + 0x24))
            sub_4620c0(arg1, sub_462098(eax_18) + *(arg1 + 0x24))
            sub_462114(sub_462180(arg1))
        else
            ebx.b = 1

if (ebx.b != 0)
    sub_461d7c(*(arg1 + 0x14))

int32_t var_18_3 = *(arg2 - 4)
void (__convention("regparm")* var_1c)(void* arg1, void* arg2) = sub_463f50
return sub_462454(*(arg2 - 4), *(arg1 + 0x14))
