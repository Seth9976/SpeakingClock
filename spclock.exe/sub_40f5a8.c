// 函数: sub_40f5a8
// 地址: 0x40f5a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
HMODULE eax
void* ecx_1
eax, ecx_1 = GetModuleHandleA("oleaut32.dll")
HMODULE var_8_1 = eax
data_4b1914 = sub_40f57c("VariantChangeTypeEx", sub_40f114, ecx_1)
int32_t __saved_ebp
data_4b1918 = sub_40f57c("VarNeg", sub_40f144, &__saved_ebp)
data_4b191c = sub_40f57c("VarNot", sub_40f144, &__saved_ebp)
data_4b1920 = sub_40f57c("VarAdd", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1924 = sub_40f57c("VarSub", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1928 = sub_40f57c("VarMul", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b192c = sub_40f57c("VarDiv", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1930 = sub_40f57c("VarIdiv", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1934 = sub_40f57c("VarMod", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1938 = sub_40f57c("VarAnd", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b193c = sub_40f57c("VarOr", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1940 = sub_40f57c("VarXor", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4b1944 = sub_40f57c("VarCmp", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterCOMObject, 
    &__saved_ebp)
data_4b1948 = sub_40f57c("VarI4FromStr", sub_40f168, &__saved_ebp)
data_4b194c = sub_40f57c("VarR4FromStr", sub_40f1d4, &__saved_ebp)
data_4b1950 = sub_40f57c("VarR8FromStr", sub_40f240, &__saved_ebp)
data_4b1954 = sub_40f57c("VarDateFromStr", sub_40f2ac, &__saved_ebp)
data_4b1958 = sub_40f57c("VarCyFromStr", sub_40f318, &__saved_ebp)
data_4b195c = sub_40f57c("VarBoolFromStr", sub_40f384, &__saved_ebp)
data_4b1960 = sub_40f57c("VarBstrFromCy", sub_40f404, &__saved_ebp)
data_4b1964 = sub_40f57c("VarBstrFromDate", sub_40f474, &__saved_ebp)
int32_t* var_c_21 = &__saved_ebp
int32_t result = sub_40f57c("VarBstrFromBool", sub_40f4e8, &__saved_ebp)
data_4b1968 = result
return result
