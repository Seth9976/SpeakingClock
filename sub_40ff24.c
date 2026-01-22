// 函数: sub_40ff24
// 地址: 0x40ff24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406a30(data_4ac26c, &var_8)
int32_t edx_1
edx_1.b = 1
sub_40451c(sub_40ceb0(sub_40fa04+0xac, edx_1, var_8))
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40ff75
int64_t** result = &var_8
sub_404b88(result)
return result
