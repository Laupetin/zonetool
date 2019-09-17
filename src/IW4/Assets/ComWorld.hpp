#pragma once

namespace ZoneTool
{
	namespace IW4
	{
		class IComWorld : public IAsset
		{
		private:
			std::string m_name;
			ComWorld* m_asset;

		public:
			ComWorld* parse(const std::string& name, std::shared_ptr<ZoneMemory>& mem);
			IComWorld();
			~IComWorld();

			void init(const std::string& name, std::shared_ptr<ZoneMemory>& mem) override;
			void prepare(std::shared_ptr<ZoneBuffer>& buf, std::shared_ptr<ZoneMemory>& mem) override;
			void load_depending(IZone* zone) override;

			std::string name() override;
			std::int32_t type() override;
			void write(IZone* zone, std::shared_ptr<ZoneBuffer>& buffer) override;

			static void dump(ComWorld* asset);
		};
	}
}