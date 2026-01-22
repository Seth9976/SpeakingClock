// 函数: Speak
// 地址: 0x412244
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c4 = ebx
int32_t esi
int32_t var_1c8 = esi
int32_t edi
int32_t var_1cc = edi
int32_t var_c0 = 0
int32_t var_bc = 0
int32_t var_b8 = 0
int32_t var_b4 = 0
int32_t var_14 = 0
int32_t var_1c = 0
void* var_20 = nullptr
void var_4c
sub_4042b8(&var_4c, 0x401004, 0xb)
int32_t* var_1d0 = &var_4
int32_t (* var_1d4)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_5 = 0
char ebx_1 = 0
uint16_t var_e
int16_t var_c
uint16_t var_a
int16_t var_8
sub_407f04(&var_c, &var_a, &var_8, &var_e, fconvert.d(sub_4081f8()))
int32_t var_18 = 0x64
double var_1e0_1
var_1e0_1:4.d = &var_18
void var_b0
var_1e0_1.d = &var_b0
GetUserNameA(var_1e0_1)
sub_403c5c(&var_20, &var_b0, 0x64)
var_1e0_1:4.d = "STDDLG32WIN"
var_1e0_1.d = 0xffffffff
int32_t var_1e4_1 = 4
HANDLE hFileMappingObject = OpenFileMappingA(4, 0x41267cffffffff)

if (hFileMappingObject == 0)
    var_1e0_1:4.d = "CLXINTCHG"
    var_1e0_1.d = 0xffffffff
    int32_t var_1e4_2 = 4
    hFileMappingObject = OpenFileMappingA(4, 0xffffffff)
    
    if (hFileMappingObject == 0)
        var_1e0_1:4.d = "SPCLDLX"
        var_1e0_1.d = 0xffffffff
        int32_t var_1e4_3 = 4
        hFileMappingObject = OpenFileMappingA(4, 0xffffffff)
        
        if (hFileMappingObject == 0)
            ebx_1 = 1

if (ebx_1 == 0)
    var_1e0_1:4.d = 0
    var_1e0_1.d = 0
    int32_t var_1e4_4 = 0
    int32_t var_1e8_1 = 4
    struct MEMORY_MAPPED_VIEW_ADDRESS eax_6
    int32_t ecx_1
    eax_6, ecx_1 = MapViewOfFile(hFileMappingObject, FILE_MAP_READ, 0, 0)
    
    if (eax_6 == 0)
        sub_4039ec(&var_1c)
    else
        sub_403be4(ecx_1, eax_6)
        var_1e0_1:4.d = eax_6
        UnmapViewOfFile()

var_1e0_1:4.d = hFileMappingObject
CloseHandle()
void* ebp_1 = sub_412188(var_20, &var_b4)
sub_403a84(ebp_1 - 0x1c, *(ebp_1 - 0xb0))

if (ebx_1 != 0)
label_4123e1:
    *(ebp_1 - 4) = 0
    *(ebp_1 - 6) = 0
    *(ebp_1 - 8) = 0
    *(ebp_1 - 0xa) = 0
else
    sub_403cd4(ebp_1 - 0xb4, *(ebp_1 - 0x1c), "z&*%0 ")
    sub_403dd4(*(ebp_1 - 0x18), *(ebp_1 - 0xb4))
    
    if (ebx_1 != 0)
        sub_403cd4(ebp_1 - 0xb8, *(ebp_1 - 0x1c), "WINSYS")
        sub_403dd4(*(ebp_1 - 0x18), *(ebp_1 - 0xb8))
        
        if (ebx_1 != 0)
            sub_403cd4(ebp_1 - 0xbc, *(ebp_1 - 0x1c), "WINAPI")
            sub_403dd4(*(ebp_1 - 0x18), *(ebp_1 - 0xbc))
            
            if (ebx_1 != 0)
                goto label_4123e1

sub_403a84(ebp_1 - 0x48, "#100")

if (*(ebp_1 - 4) != 0)
    if (*(ebp_1 - 4) u<= 0xc)
        sub_403c50(sub_4028d8(zx.d(*(ebp_1 - 4)), 2, ebp_1 - 0x1bc), ebp_1 - 0x1bc)
    else
        sub_403c50(sub_4028d8(zx.d(*(ebp_1 - 4)) - 0xc, 2, ebp_1 - 0x1bc), ebp_1 - 0x1bc)
    
    sub_403cd4(ebp_1 - 0x44, &data_4126f0, *(ebp_1 - 0x10))
else
    sub_403a84(ebp_1 - 0x44, &data_4126e4)

if (*(ebp_1 - 6) != 0)
    uint32_t temp0_1 = divu.dp.d(0:(zx.d(*(ebp_1 - 6))), 0xa)
    
    if (temp0_1 u< 1)
        sub_403a84(ebp_1 - 0x40, &data_41270c)
    else if (temp0_1 == 1)
        *(ebp_1 - 6)
        sub_403c50(sub_402938(0xa, ebp_1 - 0x1bc), ebp_1 - 0x1bc)
        sub_403cd4(ebp_1 - 0x40, &data_4126f0, *(ebp_1 - 0x10))
    else if (temp0_1 - 2 u< 4)
        sub_403c50(sub_4028d8(temp0_1 * 0xa, 2, ebp_1 - 0x1bc), ebp_1 - 0x1bc)
        sub_403cd4(ebp_1 - 0x40, &data_4126f0, *(ebp_1 - 0x10))
else
    sub_403a84(ebp_1 - 0x40, "skip")

if (*(ebp_1 - 6) != 0 && (*(ebp_1 - 6) u< 0xa || *(ebp_1 - 6) u> 0x13))
    sub_403c50(sub_4028d8(modu.dp.d(0:(zx.d(*(ebp_1 - 6))), 0xa), 2, ebp_1 - 0x1bc), ebp_1 - 0x1bc)
    sub_403cd4(ebp_1 - 0x3c, &data_4126f0, *(ebp_1 - 0x10))

int16_t eax_25 = *(ebp_1 - 4)

if (eax_25 u< 0xc)
    sub_403a84(ebp_1 - 0x38, "#101")
else if (eax_25 - 0xc u< 0xc)
    sub_403a84(ebp_1 - 0x38, "#102")

sub_403a84(ebp_1 - 0x34, &data_412738)
int32_t ebx_3 = 0
bool cond:4 = false
bool cond:5 = false

while (true)
    sub_403dd4(*(ebp_1 + (ebx_3 << 2) - 0x48), &data_412738)
    
    if (not(cond:4))
        *(ebp_1 - 1) = 1
        break
    
    sub_403dd4(*(ebp_1 + (ebx_3 << 2) - 0x48), "skip")
    
    if (cond:5)
        var_1e0_1:4.d = 0xa
        var_1e0_1.d = sub_403e88(*(ebp_1 + (ebx_3 << 2) - 0x48))
        var_1e0_1:4.d = FindResourceA(data_414660, var_1e0_1)
        var_1e0_1.d = data_414660
        HGLOBAL eax_53 = LoadResource(var_1e0_1)
        var_1e0_1:4.d = eax_53
        var_1e0_1:4.d = 4
        var_1e0_1.d = 0
        
        if (PlaySoundA(LockResource(), 0x400000000) == 0)
            break
        
        var_1e0_1:4.d = eax_53
        FreeResource()
        int32_t temp9_1 = ebx_3
        ebx_3 += 1
        cond:4 = temp9_1 != 0xffffffff
        cond:5 = temp9_1 != 0xffffffff
    else
        int32_t temp8_1 = ebx_3
        ebx_3 += 1
        cond:4 = temp8_1 != 0xffffffff
        cond:5 = temp8_1 != 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1d0_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_412671
sub_403a10(ebp_1 - 0xbc, 4)
sub_404398(ebp_1 - 0x48, 0x401004, 0xb)
sub_403a10(ebp_1 - 0x1c, 2)
sub_4039ec(ebp_1 - 0x10)
return ebp_1 - 0x10
