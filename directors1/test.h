namespace Work
{
    class WidgetImage
    {
        public:
            
            WidgetImage();
            virtual ~WidgetImage();
            
            void TestMethod();
        protected:
            virtual void TestMethod2();
            virtual void TestMethod3(Demo::Data * data);
    };
}
