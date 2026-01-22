// 函数: sub_48869c
// 地址: 0x48869c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esi = arg2

if (arg3.b != 0)
    arg2.b = 1
    int32_t var_c = sub_403c38(arg3, arg2)
    int32_t __saved_esi
    TEB* fsbase
    fsbase->NtTib.ExceptionList = &__saved_esi
    (*(*esi + 0x78))(fsbase->NtTib.ExceptionList, j_sub_40443c, &var_4)
    sub_41c894(nullptr, 0, 0)
    void* ebp_1 = sub_48845c(nullptr, arg1, (**nullptr)())
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = &data_488771
    return sub_403c68(*(ebp_1 - 8))

int32_t eax_7 = sub_41c874(arg1)
int32_t eax_10
int32_t edx_4
edx_4:eax_10 = sx.q(eax_7 + 4)
sub_41c894(arg1, eax_10, edx_4)
(*(*esi + 0x78))()
int32_t eax_14 = sub_41c874(arg1)
int32_t eax_16
int32_t edx_6
edx_6:eax_16 = sx.q(eax_7)
sub_41c894(arg1, eax_16, edx_6)
int32_t var_8_2 = eax_14 - (eax_7 + 4)
(*(*arg1 + 0x10))()
int32_t eax_22
int32_t edx_9
edx_9:eax_22 = sx.q(eax_14)
return sub_41c894(arg1, eax_22, edx_9)
