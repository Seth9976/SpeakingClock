// 函数: sub_4478bc
// 地址: 0x4478bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ExceptionList_3
int32_t* ExceptionList_1 = ExceptionList_3
int32_t* ExceptionList_4 = arg2
sub_4065c4(ExceptionList_4)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ExceptionList_5 = ExceptionList_4
int32_t (* pv)(void* arg1, void* arg2)
int32_t eax_2
int32_t ecx
eax_2, ecx =
    (*(*ExceptionList_5 + 0x14))(ExceptionList_5, 0x80058000, &pv, ExceptionList, var_1c, var_18)
int32_t var_c = eax_2

if ((var_c:3.b & 0x80) != 0)
    int32_t* var_c_1 = &pv
    pv = nullptr
    int32_t* ExceptionList_2 = ExceptionList_4
    ExceptionList_1 = ExceptionList_2
    int32_t eax_4
    eax_4, ecx = (*(*ExceptionList_2 + 0x14))(ExceptionList_1, pv, var_c_1)
    var_c = eax_4

if ((var_c:3.b & 0x80) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList_4
    __return_addr = sub_447964
    int32_t** result = &ExceptionList_4
    sub_406550(result)
    return result

int32_t* var_c_2 = &var_4
pv = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_404db0(ecx, pv)
fsbase->NtTib.ExceptionList = ExceptionList_1
int32_t var_c_3 = 0x447947
pv = pv
return CoTaskMemFree(pv)
