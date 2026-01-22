// 函数: sub_45baac
// 地址: 0x45baac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_c8 = ebx
int32_t esi
int32_t var_cc = esi
int32_t var_c4 = 0
int32_t* esi_1 = arg1
int32_t* var_d0 = &var_4
int32_t (* var_d4)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*esi_1 + 0x9c))(ExceptionList, var_d4, var_d0)
char var_89
int32_t var_74

if (var_74 == 0 && (var_89 & 0x40) != 0)
    int32_t* ebx_1 = esi_1[1]
    char eax_2
    
    if (ebx_1 != 0 && (ebx_1[7].b & 2) != 0)
        eax_2 = sub_403df4(ebx_1, &data_453234)
    
    if (ebx_1 == 0 || (ebx_1[7].b & 2) == 0 || eax_2 == 0)
        int32_t var_c0 = esi_1[2]
        char var_bc_1 = 0xb
        int32_t* var_c_1 = &var_c0
        int32_t var_10_1 = 0
        sub_406a30(data_4ac348, &var_c4)
        int32_t edx_2
        edx_2.b = 1
        int64_t** eax_7
        eax_7, ebp_1, esi_1 = sub_40ceec(sub_417654+0x48, edx_2, var_c4, var_10_1)
        sub_40451c(eax_7)
    else
        int32_t var_74_1 = sub_45f888(ebx_1)

esi_1[0x6a] = ebp_1[-0x19]
BOOL eax_12 = GetClassInfoA(ebp_1[-0x16], &ebp_1[-0x10], &ebp_1[-0x2d])

if ((sbb.d(eax_12, eax_12, eax_12 u< 1)).b == 0xff || sub_4540ec != ebp_1[-0x2c])
    if ((sbb.d(eax_12, eax_12, eax_12 u< 1)).b != 0xff)
        UnregisterClassA(&ebp_1[-0x10], ebp_1[-0x16])
    
    ebp_1[-0x19] = sub_4540ec
    ebp_1[-0x11] = &ebp_1[-0x10]
    
    if (RegisterClassA(&ebp_1[-0x1a]) == 0)
        sub_40e584()

data_4ab860 = esi_1
(*(*esi_1 + 0xa0))()

if (esi_1[0x6d] == 0)
    sub_40e584()

if ((GetWindowLongA(esi_1[0x6d], 0xfffffff0) & 0x40000000) != 0
        && GetWindowLongA(esi_1[0x6d], 0xfffffff4) == 0)
    int32_t eax_25 = esi_1[0x6d]
    SetWindowLongA(eax_25, 0xfffffff4, eax_25)

sub_409eec(esi_1[0x19])
esi_1[0x19] = 0
sub_45fc34(esi_1)
int32_t var_c_8 = 1
int32_t eax_29
void* ebp_2
eax_29, ebp_2 = sub_42b2f0(esi_1[0x1a])
sub_458ac8(esi_1, var_c_8)

if (esi_1[0x17].b != 0)
    int32_t* eax_31 = esi_1
    esi_1.w = 0xffee
    sub_403e64(eax_31, esi_1)

int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_45bc74
sub_404b88(ebp_2 - 0xc0)
return ebp_2 - 0xc0
