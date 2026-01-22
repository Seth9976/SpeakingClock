// 函数: sub_45b178
// 地址: 0x45b178
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t edx
int32_t var_14 = edx
int32_t* ExceptionList = arg1

if (ExceptionList[0x77].b != 0 && *(ExceptionList + 0x1db) != 0 && ExceptionList[0x6c] != 0)
    (*(*ExceptionList[0x6c] + 0x2c))()

int32_t __saved_ebp
int32_t esi

if (sub_45b124(&__saved_ebp) == 0)
    int32_t* result = ExceptionList
    
    if (*(result + 0x1da) == 0)
        return result
    
    esi.w = 0xffee
    return sub_403e64(ExceptionList, esi)

int32_t ecx_3
int32_t edx_3
edx_3, ecx_3 = (*(*ExceptionList + 0x90))()
edx_3.b = 1
int32_t* eax_8
void* edx_4
eax_8, edx_4 = sub_403c38(ecx_3, edx_3)
__return_addr = &__saved_ebp
int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_c_1 = &__saved_ebp
int32_t* var_c_2 = &__saved_ebp
int32_t* var_c_3 = &__saved_ebp
int32_t* var_c_4 = &__saved_ebp
int32_t* var_c_5 = &__saved_ebp
int32_t* var_c_6 = &__saved_ebp
int32_t* var_c_7 = &__saved_ebp
sub_45af98(0, 
    sub_45af98(6, sub_45af98(5, sub_45af98(4, sub_45af98(3, sub_45af98(2, sub_45af98(1, edx_4)))))))
esi.w = 0xffc6
sub_403e64(ExceptionList, esi)
fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = &data_45b25e
return sub_403c68(eax_8)
