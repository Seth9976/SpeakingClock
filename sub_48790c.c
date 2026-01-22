// 函数: sub_48790c
// 地址: 0x48790c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_124 = ebx
int32_t esi
int32_t var_128 = esi
int32_t edi
int32_t var_12c = edi
int32_t var_18 = 0
int32_t var_1c = 0
int32_t var_120 = 0
int32_t* var_130 = &var_4
int32_t (* var_134)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1
int32_t ecx
int32_t edx_1
eax_1, edx_1, ecx = (**arg3)(ExceptionList, var_134, var_130)
int32_t* var_8

if (edx_1 != 0 || eax_1 != 0)
    edx_1.b = 1
    var_8 = sub_403c38(ecx, edx_1)
    int32_t* var_c_1 = &var_4
    int32_t (* var_10_1)() = j_sub_404188
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    (*(*var_8 + 4))(ExceptionList_1, var_10_1, var_c_1, var_8)
    sub_41caa0(arg3, var_8[1], arg2)
    char eax_9
    eax_9, ebp_1 = sub_487f04(var_8, &ExceptionList_1)
    
    if (eax_9 != 0)
        sub_4878d0(arg1, ebp_1[-1])
    else
        sub_404dec(sub_403b48(*arg1, &ebp_1[-0x46]), &ebp_1[-0x46])
        int32_t var_18_1 = ebp_1[-6]
        void* const var_1c_1 = &data_487a5c
        sub_406a30(data_4ac3c4, &ebp_1[-0x47])
        int32_t var_20_1 = ebp_1[-0x47]
        sub_404f1c(&ebp_1[-5], 3)
        int32_t edx_8
        edx_8.b = 1
        sub_40ceb0(sub_48771c+0x48, edx_8, ebp_1[-5])
    
    fsbase->NtTib.ExceptionList = ExceptionList_1
else
    sub_4878d0(arg1, nullptr)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_487a4c
sub_404b88(&ebp_1[-0x47])
return sub_404bac(&ebp_1[-6], 2)
