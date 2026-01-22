// 函数: sub_49cc9e
// 地址: 0x49cc9e
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_34 = ebx
int32_t esi
int32_t var_38 = esi
int32_t edi
int32_t var_3c = edi
int32_t* var_30 = nullptr
int32_t var_28 = 0
int32_t var_14 = *arg2
void var_10
void* edi_1 = &var_10
void* esi_2 = &arg2[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
char* edi_5 = arg1
int32_t* var_40 = &var_4
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg2.b = 1
sub_42bcec(*(*(edi_5 + 0x250) + 0x14), arg2.b)
sub_42bbb0(*(*(edi_5 + 0x250) + 0x14), *(edi_5 + 0x70))
(*(*edi_5 + 0x124))(ExceptionList, var_44, var_40)
sub_42c630(*(edi_5 + 0x250))
int32_t esi_6 = sub_45a198(edi_5, 0)
int16_t var_2c
char* var_20

if (sub_403df4((*(*edi_5 + 0x128))(), 0x48742c) != 0 && *((*(*edi_5 + 0x128))() + 0x30) u> 0
        && edi_5[0x2f0] != 0)
    var_20 = (*(*edi_5 + 0x124))(&var_14)
    int32_t var_24 = 0
    var_28 = 0
    var_2c.d = esi_6
    var_30 = &var_24
    int32_t* eax_17
    int32_t ecx
    eax_17, ecx = (*(*edi_5 + 0x128))(var_30, var_2c, var_28, var_24, var_20)
    sub_4577d8(ecx, &var_28)
    edi_5[0x2f0]
    sub_48f374(eax_17, var_28)
    var_20 = edi_5
    var_14 = var_24
    void* edi_6 = &var_10
    char** esi_7 = &var_20
    *edi_6 = *esi_7
    void* edi_7 = edi_6 + 4
    void* esi_8 = &esi_7[1]
    *edi_7 = *esi_8
    *(edi_7 + 4) = *(esi_8 + 4)
    edi_5 = var_20

int32_t* var_1c_3 = &var_14
var_20 = zx.d(*(data_4ac190 + (zx.d(arg3) << 1))) | esi_6 | 0x40 | 0x20 | 0x800
sub_403718(&var_2c, (*(*edi_5 + 0x50))(var_20, var_1c_3), 2)
uint32_t eax_28
eax_28.w = var_2c | 8
var_20 = nullptr
int32_t* eax_30
int32_t ecx_3
eax_30, ecx_3 = (*(*edi_5 + 0x128))(var_20, eax_28)
sub_4577d8(ecx_3, &var_30)
sub_48f494(eax_30, var_30, *(edi_5 + 0x250))
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_49ce1e
sub_404b88(&var_30)
int32_t* result = &var_28
sub_404b88(result)
return result
