#pragma once
#include <string>
class TextureConverter
{
public:
	/// <summary>
	/// テクスチャをWICからDDSへ変換
	/// </summary>
	/// <param name="filePath"></param>
	void ConvertTextureWICToDDS(const std::string& filePath);
private:
	/// <summary>
	/// テクスチャファイル読み込み
	/// </summary>
	/// <param name="filePath"></param>
	void LoadWICTextureFromFile(const std::string& filePath);
	/// <summary>
	/// マルチバイト文字列をワイド文字列に変換
	/// </summary>
	/// <param name="mString"></param>
	/// <returns></returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};

