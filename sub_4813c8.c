// 函数: sub_4813c8
// 地址: 0x4813c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_44 = ebx
int32_t esi
int32_t var_48 = esi
int32_t edi
int32_t var_4c = edi
int64_t* var_28 = nullptr
int32_t var_3c = 0
char* var_40 = nullptr
int32_t* var_50 = &var_4
int32_t (* var_54)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lParam = 2
int32_t eax_2 = (*(*arg1[0x9c] + 0x14))(ExceptionList, var_54, var_50) - 1
int32_t i_1

if (eax_2 s>= 0)
    i_1 = eax_2 + 1
    WPARAM wParam = 0
    int32_t i
    
    do
        int32_t var_10_1 = (*(*arg1 + 0xe0))(i_1)
        
        if (SendMessageA(sub_45f888(arg1), 0x1306, wParam, &lParam) == 0)
            (*(*arg1[0x9c] + 0xc))(&var_28)
            int32_t var_38 = var_3c
            char var_34_1 = 0xb
            WPARAM wParam_1 = wParam
            char var_2c_1 = 0
            int32_t* var_10_3 = &var_38
            sub_406a30(data_4ac3a8, &var_40)
            sub_40a37c(1, var_10_3, var_40)
            sub_48058c(var_28)
        
        wParam += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_481360(arg1)
fsbase->NtTib.ExceptionList = i_1
__return_addr = sub_4814ba
sub_404bac(&var_40, 2)
int64_t** result = &var_28
sub_404b88(result)
return result
