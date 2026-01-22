// 函数: sub_4a3570
// 地址: 0x4a3570
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_184 = ebx
int32_t esi
int32_t var_188 = esi
int32_t edi
int32_t var_18c = edi
int32_t var_180 = 0
int32_t var_17c = 0
int32_t var_178 = 0
int32_t var_170 = 0
int32_t var_174 = 0
char* var_16c = nullptr
int32_t var_168 = 0
uint16_t var_164[0xa]
sub_405608(&var_164, sub_407f68)
void* edi_1 = data_4ac0e4
int32_t* var_190 = &var_4
int32_t (* var_194)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404ea0(&var_168, *edi_1, "*.DLL")
enum WIN32_ERROR eax_3 = sub_40993c(var_168, 0x3f, &var_164)
bool cond:0 = eax_3 != NO_ERROR

if (eax_3 == NO_ERROR)
    enum WIN32_ERROR i
    
    do
        int32_t j_1 = 0x29
        char const (** ebx_1)[0xa] = &data_4abe34
        int32_t j
        
        do
            int64_t* var_150
            sub_408cbc(var_150, &var_16c)
            sub_404fb0(*ebx_1, var_16c)
            
            if (not(cond:0))
                int32_t var_19c_1 = *edi_1
                void* const var_1a0_1 = "voice\"
                int32_t var_1a4_1 = ebx_1[1]
                sub_404f1c(&var_170, 3)
                PSTR lpNewFileName = sub_405018(var_170)
                sub_404ea0(&var_174, *edi_1, var_150)
                
                if (MoveFileA(sub_405018(var_174), lpNewFileName) == 0)
                    sub_404ea0(&var_178, *edi_1, var_150)
                    DeleteFileA(sub_405018(var_178))
            
            ebx_1 = &ebx_1[2]
            j = j_1
            j_1 -= 1
            cond:0 = j != 1
        while (j != 1)
        i = sub_40998c(&var_164)
        cond:0 = i != NO_ERROR
    while (i == NO_ERROR)
    sub_4099b0(&var_164)

sub_404ea0(&var_17c, *edi_1, sub_4a3767+5)

if (sub_40984c(var_17c) != 0)
    sub_404ea0(&var_180, *edi_1, sub_4a3767+5)
    DeleteFileA(sub_405018(var_180))

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_190_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4a373b
sub_404bac(&var_180, 7)
uint16_t (* result)[0xa] = &var_164
sub_4056d8(result, sub_407f68)
return result
