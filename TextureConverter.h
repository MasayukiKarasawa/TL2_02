#pragma once
#include <string>
#include "externals/DirectXTex/DirectXTex.h"
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
	/// <summary>
	/// フォルダパスとファイル名を分離する
	/// </summary>
	/// <param name="filePath"></param>
	void SeparateFilePath(const std::wstring& filePath);
	/// <summary>
	/// DDSテクスチャとしてファイル書き出し
	/// </summary>
	void SaveDDSTextureToFile();




	//ディレクトリパス
	std::wstring directoryPath_;
	//ファイル名
	std::wstring filename_;
	//ファイル拡張子
	std::wstring fileExt_;

	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scratchImage_;

};

