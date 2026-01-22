// 函数: sub_447798
// 地址: 0x447798
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t** var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t** var_8 = arg2
sub_4065c4(var_8)
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *sub_4478b8(arg1)
(*(edx + 0x44))(ExceptionList, var_2c, var_28)
int32_t** var_10
int32_t* var_c = &var_10
int32_t** eax_3 = var_8
var_10 = eax_3

if (((*eax_3)[9](var_10, var_c) & 0x80000000) == 0)
    int32_t var_14
    var_c = &var_14
    sub_406550(&var_c)
    var_10 = &var_c
    var_14 = 1
    int32_t** eax_7 = var_10
    var_18 = eax_7
    int32_t edi_2 = (*eax_7)[3](var_18, var_14, var_10, var_c)
    
    while (sub_407c30(edi_2) != 0)
        if (var_14 == 0)
            break
        
        esi.w = 0xffe6
        sub_403e64(arg1, esi, var_c, &arg1[0x11])
        int32_t* eax_12 = sub_4478b8(arg1)
        arg1[0x11]
        (*(*eax_12 + 0x38))()
        var_c = &var_14
        sub_406550(&var_c)
        var_10 = &var_c
        var_14 = 1
        int32_t** eax_14 = var_10
        var_18 = eax_14
        edi_2 = (*eax_14)[3](var_18, var_14, var_10, var_c)
    
    if ((*(*sub_4478b8(arg1) + 0x14))() s> 0)
        (*(*sub_4478b8(arg1) + 0xc))()
        sub_404bdc(&arg1[0x11], var_18)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4478af
sub_404b88(&var_18)
sub_406550(&var_10)
sub_406550(&var_c)
int32_t*** result = &var_8
sub_406550(result)
return result
